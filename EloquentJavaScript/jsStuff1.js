console.log("It's alive!!");
//alert("It's on like donkey kong");
//console.log(Math.max(2,4,6,7));
//confirm("Go or Stop");
//prompt("tell me a story");
/*var theNumber = Number(prompt("Pick a number"));
if(!isNaN(theNumber))
	alert("Your number is the square root of " + 
		theNumber * theNumber);
else
	alert("That is not a number");

var number = 0;
while (number <= 12)
{
	console.log(number);
	number++;
}

var result = 1;
var counter = 0;
while(counter != 10)
	{
		result = result * 2;
		counter++;
	}
console.log(result);

do{
	var name = prompt("Who are you?")
}while(!name);
console.log(name);

var result = 0;
for (var i = 0; i <= 10; i++)
{
	console.log(result);
	if (result == 7)
		continue;
	result++;
} 
console.log (result - 1);
*/
switch(prompt("Whats the weather today?"))
{
	case "rainy":
		console.log("With Meatballs");
		break;
	case "sunny":
		console.log("Side Up");
		break;
	case "cloudy":
		console.log("Like Marshmallows");
	default:
		console.log("Yeah thats not weather");
		break;
}