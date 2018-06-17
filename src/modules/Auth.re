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

let make = (~authState, children) => {
  ...component,
  didMount: (_self) => {
    /* Redirect to Login page if user is not authenticated. */
    if (authState.status === Unauthenticated) {
      ReasonReact.Router.push("login");
    }
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
