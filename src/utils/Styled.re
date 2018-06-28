type tag =
  | H1(string);

let classNameMap = Js.Dict.empty();

Js.Dict.set(classNameMap, "whatthe", "fuck");

let makeClassNameHash = css => {
  let hash = MurmurHash.v3(css);

  switch (Js.Dict.get(classNameMap, hash)) {
  | None => Js.Dict.set(classNameMap, hash, css)
  | Some(h) => h
  };
};

let renderStyledComponent = (props, tag, css, children) => {

  let className = makeClassNameHash(css);

  Js.log(className);

  /* Js.Dict.set(classNameMap, className, css); */

  /* let f = Js.Dict.get(classNameMap, className); */

  /* Js.log(f); */

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
