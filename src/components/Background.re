let style = ReactDOMRe.Style.make(
  ~backgroundColor = Theme.color(SteelGray),
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