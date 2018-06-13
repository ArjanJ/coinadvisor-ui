type route =
  | Dashboard
  | Login
  | Signup;

type state = { route };

type action =
  | ChangeRoute(route);

let reducer = (action, _state) =>
  switch action {
  | ChangeRoute(route) => ReasonReact.Update({ route: route })
  };

let component = ReasonReact.reducerComponent("Routes");

let mapUrlToRoute = (url: ReasonReact.Router.url) =>
  switch url.path {
  | [] => Dashboard
  | ["dashboard"] => Dashboard
  | ["login"] => Login
  | ["signup"] => Signup
  | _ => Dashboard
  };

let make = (_children) => {
  ...component,
  initialState: () => { route: Signup },
  reducer,
  subscriptions: (self) => [
    Sub(
      () => ReasonReact.Router.watchUrl((url) => self.send(ChangeRoute(url |> mapUrlToRoute))),
      ReasonReact.Router.unwatchUrl
    )
  ],
  render: (self) =>
    <div>
      (
        switch self.state.route {
        | Dashboard => <div>(ReasonReact.string("Dashboard"))</div>
        | Login => <div>(ReasonReact.string("Login"))</div>
        | Signup => <div>(ReasonReact.string("Signup"))</div>
        }
      )
    </div>,
};
