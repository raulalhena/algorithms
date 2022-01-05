/**
 *
 * Multiply without multiplying algorithm.
 * Notice that there is no control of zero or negative numbers.
 *
 */

const mult_no_mult = (a , b) => {

  let aux = 0;

  for(let i = b; i > 0; i--)
    aux += a;

  console.log(`Result of ${a} * ${b} = ${aux}`);
}

mult_no_mult(3, 6);
