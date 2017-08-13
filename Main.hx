package;
import Parser;
import haxe.Json;
/**
 * ...
 * @author Damilare Akinlaja
 */
class Main 
{

	public static function main() 
	{
		var ast = (new Parser()).parse('42 + 5 * 6');
		trace(ast);
	}
	
}