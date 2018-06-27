type tagMap =
  | H1;

let renderStyledComponent = (props, tag, css, children) => {
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
  | H1 => css => (~props, ~children) => renderStyledComponent(props, "h1", css, children)
  }
}