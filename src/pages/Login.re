let component = ReasonReact.statelessComponent("Login");

let rs = ReasonReact.string;

let make = (_children) => {
...component,
render: (_self) =>
  <section>
    <Heading>(rs("Sign in"))</Heading>
    <a href="/api/auth/google">(rs("Sign in with Google"))</a>
  </section>
};
