package;
import Parser;
import org.waxeye.parser.AST;
import org.waxeye.parser.ParseError;
import haxe.Json;

/**
 * ...
 * @author Damilare Akinlaja
 */
class Main 
{

	public static function main() 
	{

		var math = Sys.stdin();
		Sys.print("Calc: ");
		var calc = math.readLine();
		var ast = (new Parser()).parse(calc);
		if (Std.is(ast, AST)){
			Sys.print("=> "+calc+" = "+sum(ast.children[0]));
		}else if(Std.is(ast, ParseError)){
			Sys.print(ast.toString());
		}
		


	}

	private static function binOp(ast:AST, fn:AST->Dynamic, ch:String, op1:Dynamic, op2:Dynamic):Dynamic
	{
		var chil:Array<Any> = ast.children;
		// apply the visitor function to our first sub-tree
		var val = fn(chil[0]);
		
		var i = 1;
		
		while(i != chil.length){
			// choose our operator function
			 var operator = chil[i] == ch ? op1 : op2;
			
			 // apply the visitor function to our second sub-tree
			
			 var operand = fn(chil[i + 1]);
			 
			 // apply the operator to our current value and the second sub-tree
			 val = operator(val, operand);
			 // move on to the next operator and sub-tree
			 i += 2;
		}
		
		return val;
		
	}
	
	private static function sum(ast:AST):Dynamic
	{
		var add = function(a, b){return a + b; };
		var sub = function(a, b){return a - b; };
		
		return binOp(ast, prod, '+', add, sub);
	}
	
	
	private static function prod(ast:AST):Dynamic
	{
		var mult = function(a, b){return a * b; };
		var div = function(a, b){return a / b; };
		
		return binOp(ast, unary, '*', mult, div);
	}
	
	private static function unary(ast:AST):Dynamic
	{
		if (ast.type == 'unary') {
			// the unary rule is a pruning non-terminal
			// the only case we will see it is if we have negation
			return - unary(ast.children[1]);
		}
		else {
			if (ast.type == 'sum') {
				return sum(ast);
			}
			else {
				return num(ast);
			}
		}		
		
	}
	
	
	private static function num(ast:AST):Float
	{
		return Std.parseFloat(ast.children.join(''));
	}
	
	
	
}