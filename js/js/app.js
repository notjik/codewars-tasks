import * as readline from 'node:readline/promises';
import { stdin as input, stdout as output } from 'node:process';
const rl = readline.createInterface({ input, output });

/*// Collatz Conjecture (3n+1)
import * as CollatzConjecture from './Kata/CollatzConjecture.js'
console.log(CollatzConjecture.CollatzConjecture(await rl.question('')));
*/

/*// Multiples of 3 or 5
import * as MultiplesOf3Or5 from './Kata/MultiplesOf3Or5.js'
console.log(MultiplesOf3Or5.solution(await rl.question('')));
*/

/*
// Who likes it?
import * as WhoLikesIt from './Kata/WhoLikesIt.js'
console.log(WhoLikesIt.likes((await rl.question('')).toString().split(" ").filter(function (el) { return el; })));
*/

/*
// Isograms
import * as WhoLikesIt from './Kata/Isograms.js'
console.log(WhoLikesIt.isIsogram(await rl.question('')));
*/

/*
// You're a square!
import * as YouReASquare from './Kata/YouReASquare.js'
console.log(YouReASquare.YouReASquare(await rl.question('')));
*/


/*
// Complementary DNA
import * as ComplementaryDNA from './Kata/ComplementaryDNA.js'
console.log(ComplementaryDNA.DNAStrand(await rl.question('')));
*/

// Replace With Alphabet Position
import * as ReplaceWithAlphabetPosition from './Kata/ReplaceWithAlphabetPosition.js'
console.log(ReplaceWithAlphabetPosition.alphabetPosition(await rl.question('')));


const stop = await rl.question('\nPress Enter to stop the application...\n');
rl.close();