
module Square = {
  module InnerSquare = {
    include ReactRe.Component;
    type props = { sideLength: int };
    let name = "Square";
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
  include ReactRe.CreateComponent InnerSquare;
  let createElement ::sideLength =>
    wrapProps {sideLength: sideLength};
};


module Problem6 = {
  include ReactRe.Component;
  type props = unit;
  let name = "Problem6";
  let render _ =>
    <div>
      <Square sideLength=(50) />
      <Square sideLength=(25) />
    </div>
};
include ReactRe.CreateComponent Problem6;
let createElement = wrapProps ();
