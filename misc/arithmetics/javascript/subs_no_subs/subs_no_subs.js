/**
 *
 *  Subtract without subtracting algorithm.
 *  Notice that there is not number control, so it's asumed that a is going to be
 *  bigger than b.
 *
 */

const subs_no_subs = (a, b) => {

	let aux = b;
  	let i;

  	for(i = 0; aux < a; i++, aux++);

  console.log(`Result of ${a} - ${b} = ${i}`);
}

subs_no_subs(10, 3);
