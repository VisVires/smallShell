
//Sum of a range + step
var range = function(start, end, step)
{
	var numbers = [];
	
	if(step == null)
		step = 1;
	else if (step > 1)
		end = end + 1;
	else
		end = end - 1;

	for (var iter = start; iter <= end; iter = iter + step)
	{	
		numbers.push(iter);
		//console.log(iter);
	}
	return numbers;
}
/*
function sum(arrayOfNums)
{
	var result = 0;
	for(var iter = 0; iter != arrayOfNums.length; ++iter)
	{
		result += arrayOfNums[iter];
	}
	return result;
}

console.log(sum(range(5,2,-1)));

//Reversing an Array

function reverseArray(arr)
{
	var newArray = [];
	var j = 0;
	for (var i = arr.length; i >= 0; --i)
	{
		console.log(arr[i]);
		newArray[j] = arr[i];
		++j;
	}
	return newArray;
}

reverseArray(range(1,10));

function reverseArrayInPlace(arr)
{
	var i, j, temp;
	console.log(arr[i], arr[j]);
	for (i = 0, j = arr.length - 1; i <= ((arr.length - 1)/2); ++i, --j)
	{
		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}
	return arr;
}

function displayArr(arr)
{
	for(var i = 0; i <= arr.length - 1; ++i)
	{
		console.log(arr[i]);
	}
}

displayArr(reverseArrayInPlace(range(1,10)));

//A list

function arrToList(arr)
{
	var list = null;
	for(var i = arr.length - 1; i >= 0; --i)
	{
		list = {value: arr[i], rest: list}
	}
	return list;
}

function listToArr(list)
{
	var arr = [];
	for (node = list; node; node = node.rest)
		arr.push(node.value);
	return arr;
}

function prepend(element, list)
{	
	return {value: element, rest: list};
}
	
function nth(list, pos)
{
	if(!list)
		return undefined;
	else if(pos == 0)
		return list.value;
	else
		return nth(list.rest, pos - 1);
}

console.log(arrToList([10, 20]));
console.log(listToArr(arrToList([10,20,30])));
console.log(nth(arrToList([10, 20, 30]), 1));
*/
//Deep Comparison
function deepEqual(obj1, obj2)
{
	if(obj1 === obj2)
		return true;

	if(typeof obj1 != "object" || typeof obj1 == null || 
		typeof obj2 != "object" || typeof obj2 == null)
		return false;

	var propertyA = 0, propertyB = 0;

	for (var prop in obj1)
		propertyA += 1;

	for (var prop in obj2){
		propertyB += 1;
		if (!(prop in obj1) || !deepEqual(obj1[prop], obj2[prop]))
			return false;
	}
	return propertyA == propertyB;
}

var obj = {here: {is: "an"}, object: 2};
console.log(deepEqual(obj, obj));
console.log(deepEqual(obj, {here: 1, object: 2}));
console.log(deepEqual(obj, {here: {is: "an"}, object: 2}));
