let component = ReasonReact.statelessComponent("Login");

let make = (_children) => {
...component,
render: (_self) =>
  <section>
    <h1>(ReasonReact.string("Sign in"))</h1>
    <a href="/api/auth/google">(ReasonReact.string("Google"))</a>
  </section>
};
