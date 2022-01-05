/**
 *
 * Division without division algorithm.
 * Notice that there is no control of zero or negative numbers or if b is greater than a.
 *
 */

const div_no_div = (a, b) => {

  	let aux = b;
	let i;

  	for(i = 0; aux <= a; i++)
	  aux += b;
		
	console.log(`Result of ${a} / ${b} = ${i}`);
}

div_no_div(30, 2);
