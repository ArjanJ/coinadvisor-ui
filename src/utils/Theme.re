type colorMap =
  | Aquamarine
  | Heliotrope
  | KeyLimePie
  | SteelGray
  | White;

let color = c =>
  switch c {
  | Aquamarine => "#77FFFF"
  | Heliotrope => "#9F83FF"
  | KeyLimePie => "#D9CA28"
  | SteelGray => "#1C1C27"
  | White => "FFFFFF"
  };