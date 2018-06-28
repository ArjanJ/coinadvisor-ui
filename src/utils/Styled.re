type tag =
  | H1(string);

let makeClassNameHash = css => {
  Js.log(css);
};

let renderStyledComponent = (props, tag, css, children) => {
  let className = makeClassNameHash(css);

  ReasonReact.element(
    StyledComponent.make(
      ~props=props,
      ~tag=tag,
      [| children |],
    )
  )
};

let component = tag => {
  switch tag {
  | H1(css) => (props, children) => renderStyledComponent(props, "h1", css, children)
  }
};
