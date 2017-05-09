module Problem5Square = {
  include ReactRe.Component;
  type props = { sideLength: int };
  let name = "Problem5Square";
  let styles p =>
    ReactDOMRe.Style.make
      width::((string_of_int p.sideLength) ^ "px")
      height::((string_of_int p.sideLength) ^ "px")
      border::"3px solid #000"
      display::"block"
      ();
  let render {props} =>
    <div
      style=(styles props)
    />;
};

include ReactRe.CreateComponent Problem5Square;

let createElement ::sideLength =>
  wrapProps {sideLength: sideLength};
