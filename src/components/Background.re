let style = ReactDOMRe.Style.make(
  ~backgroundColor = "#1D1D2C",
  ~minHeight = "100vh",
  ()
);

let component = ReasonReact.statelessComponent("Background");

let make = (children) => {
  ...component,
  render: (_self) =>
    ReasonReact.createDomElement(
      "div",
      ~props={"style": style},
      children,
    )
};