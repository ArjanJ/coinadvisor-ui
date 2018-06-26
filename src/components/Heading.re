let component = ReasonReact.statelessComponent("Heading");

let make = (
  ~color=Theme.color(Aquamarine),
  ~element="h1",
  ~fontSize="2.4rem",
  ~fontWeight="700",
  ~margin="0",
  children,
) => {
  ...component,
  render: (_self) =>
    ReasonReact.createDomElement(
      element,
      ~props={"style": ReactDOMRe.Style.make(
        ~color=color,
        ~fontSize=fontSize,
        ~fontWeight=fontWeight,
        ~margin=margin,
        (),
      )},
      children,
    )
};
