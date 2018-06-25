let makeHeaders = (token: option(string)) => {
  switch token {
  | None =>
    Fetch.HeadersInit.make({ "Content-Type": "application/json" })
  | Some(t) =>
    Fetch.HeadersInit.make({ "Authorization": "bearer " ++ t, "Content-Type": "application/json" })
  }
};

let makeRequest = (~requestMethod, ~token) => {
  Fetch.RequestInit.make(
    ~headers=makeHeaders(token),
    ~method_=requestMethod,
    (),
  );
};

let sendRequest = (~body: option(Js.Json.t), ~requestMethod, ~url) => {
  let token = Cookie.getJWT();

  let init = () => {
    switch body {
    | None =>
      Fetch.RequestInit.make(
        ~headers=makeHeaders(token),
        ~method_=requestMethod,
        (),
      )
    | Some(data) => 
        Fetch.RequestInit.make(
        ~body=Fetch.BodyInit.make(Js.Json.stringify(data)),
        ~headers=makeHeaders(token),
        ~method_=requestMethod,
        (),
      )
    };
  };

  Js.Promise.(
    Fetch.fetchWithInit(
      url,
      init(),
    )
    |> then_(Fetch.Response.json)
  );
};

