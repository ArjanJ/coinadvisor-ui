 module Styled = {
  type tag = Div | Span;

  let create = (element) => {
    switch element {
    | Div => <div />
    | Span => <span />
    }
  };
 };

 /* let component = ReasonReact.statelessComponent("Styled");

 let make = (_children) => {
   ...component,
   render: (_self) => {

   }
 } */
