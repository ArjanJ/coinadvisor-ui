type status = 
  | Authenticated
  | Authenticating
  | Unauthenticated;

type state = { status };

let initialState = () => {
  status: Unauthenticated,
};

type action = 
  | ChangeAuthStatus(status);

let reducer = (action, _state) =>
  switch action {
  | ChangeAuthStatus(status) => { status: status }
  };

let component = ReasonReact.statelessComponent("Auth");

let make = (~authState, ~authDispatch, children) => {
  ...component,
  didMount: (_self) => {
    let token = Cookie.getJWT();

    switch token {
    | None => ReasonReact.Router.push("login")
    | Some(_t) => authDispatch(ChangeAuthStatus(Authenticated))
    };
  },
  render: (_self) =>
  (
    switch authState.status {
    | Authenticated => (children |> ReasonReact.array)
    | Authenticating => <div>(ReasonReact.string("Authenticating"))</div>
    | Unauthenticated => <div>(ReasonReact.string("Unauthenticated"))</div>
    }
  )
}
