type tag =
  | H1(string);

let classNameMap = Js.Dict.empty();

let getClassNameHash = css => {
  let hash = "sc-" ++ MurmurHash.v3(css);

  let className =
    switch (Js.Dict.get(classNameMap, hash)) {
    | None => Js.Dict.set(classNameMap, hash, css)
    };

  hash;
};


let renderStyledComponent = (tag, css, children) => {
  let className = getClassNameHash(css);
  
  ReasonReact.element(
    StyledComponent.make(
      ~props={"className": className},
      ~tag=tag,
      [| children |],
    )
  )
};

let component = tag => {
  switch tag {
  | H1(css) =>  children => renderStyledComponent("h1", css, children)
  }
};
