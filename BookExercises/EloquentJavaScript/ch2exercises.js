console.log("Chapter 2 Excercises");
//looping a triangle
for (var line = 0; line <= 8; line++)
{	
	var shape = '#';
	var total = '';
	while(total.length <= line)
	{
		total = total + shape;
	}
	console.log(total);
}

//fizzbuzz
for(var num = 1; num <= 100; num++)
{
	if(num%3 == 0 && num%5 == 0)
		console.log("FizzBuzz");
	else if(num%3 == 0)
		console.log("Fizz");
	else if(num%5 == 0)
		console.log("Buzz");
	else
		console.log(num);
}

//Chess Board
var gridSize = prompt("What is your grid size?");
if(isNaN(gridSize))
{
	alert("Not A Number!");
}
var space = " ";
var black = "#";
var full;
for(var line = 0; line != gridSize; line++)
{
	if (line%2 == 0)
		full = black;
	else
		full = space;

	for(var col = 1; col <= gridSize; col++)
	{
			if ((col + line)%2 == 0)
				full = full + black;
			else
				full = full + space;
	}

	console.log(full);
}