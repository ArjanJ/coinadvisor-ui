type route =
  | Dashboard
  | Login

type state = { route };

type action =
  | ChangeRoute(route);

let reducer = (action, _state) =>
  switch action {
  | ChangeRoute(route) => ReasonReact.Update({ route: route })
  };

let initialState = () => {
  route: Dashboard
};

let component = ReasonReact.reducerComponent("Routes");

let mapUrlToRoute = (url: ReasonReact.Router.url) =>
  switch url.path {
  | [] => Dashboard
  | ["dashboard"] => Dashboard
  | ["login"] => Login
  | _ => Dashboard
  };

let make = (_children) => {
  ...component,
  initialState,
  reducer,
  subscriptions: (self) => [
    Sub(
      () => ReasonReact.Router.watchUrl((url) => self.send(ChangeRoute(url |> mapUrlToRoute))),
      ReasonReact.Router.unwatchUrl
    )
  ],
  render: ({state}) =>
    <Store>
      ...((appState, _send) =>
        (
          <Background>
            (
              switch state.route {
              | Dashboard => <Auth authState=appState.auth><Dashboard key="dashboard" /></Auth>
              | Login => <Login />
              }
            )          
          </Background>
        )
      )
    </Store>,
};
