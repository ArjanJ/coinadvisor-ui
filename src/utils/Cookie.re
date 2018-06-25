open JustgageReasonCookie;

let getJWT = () => Cookie.getAsString("SID");

let removeJWT = () => Cookie.remove("SID");
