let component = ReasonReact.statelessComponent("Login");

let rs = ReasonReact.string;

let title = Styled.component(H1("color: red; font-size: 20px;"));

let make = (_children) => {
...component,
render: (_self) =>
  <section>
    <Heading>(rs("Sign in"))</Heading>
    <a href="/api/auth/google">(rs("Sign in with Google"))</a>
    (title(
      {"_": ""},
      <p>(rs("in a p tag"))</p>
    ))
  </section>
};
