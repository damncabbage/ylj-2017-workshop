module Problem5 = {
  include ReactRe.Component;
  type props = unit;
  let name = "Problem5";
  let render _ =>
    <div>
      <Problem5Square sideLength=(50) />
      <Problem5Square sideLength=(25) />
    </div>
};

include ReactRe.CreateComponent Problem5;

let createElement = wrapProps ();
