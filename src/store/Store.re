type state = {
  auth: Auth.state,
};

type action =
  | Auth(Auth.action);

let initialState = () => {
  auth: Auth.initialState(),
};

let reducer = (action, state) =>
  switch action {
  | Auth(authAction) => ReasonReact.Update({ auth: Auth.reducer(authAction, state.auth) })
  };

let component = ReasonReact.reducerComponent("Store");

let make = (children) => {
  ...component,
  initialState,
  reducer,
  render: ({state}) => children(state)
};