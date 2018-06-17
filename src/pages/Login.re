let component = ReasonReact.statelessComponent("Login");

let make = (~dispatch, _children) => {
  let handleLoginClick = (_event) => {
    dispatch(Auth.ChangeAuthStatus(Auth.Authenticated));
    ReasonReact.Router.push("/");
  };
  {
    ...component,
    render: (_self) =>
      <section>
        <h1>(ReasonReact.string("Sign in"))</h1>
        <button
          onClick=handleLoginClick _type="button">
            (ReasonReact.string("Sign in"))
        </button>
      </section>
  }
}
