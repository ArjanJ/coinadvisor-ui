type t;

/**
 * MurmurHash
 * bs-binding of https://www.npmjs.com/package/murmurhash
 * 
 * Usage:
 * let foo = MurmurHash.v3("ayyyyyyy lmao");
 */

[@bs.module] external murmurhash : string => string = "";

let v3 = murmurhash;
