  constexpr char YELLOW[] = "\033[33m";
  constexpr char BLANK[] = "\033[0m";
  
  Value	Description
30	Black
31	Red
32	Green
33	Yellow
34	Blue
35	Magenta
36	Cyan
37	White

  Value Description
1   Bold
3   Italic
4   Underline
21  Double Underline

1;__m Bright
38;2;R;G;Bm           Sets Test Color RGB
ex 38;2;128;128;0m    Puke Yellow
ex 38;2;170;85;0m     ORANGE

38;2;208m Dark Red

  void ExecutiveImportGradleSourceDirective() {
    int randMessage = rand() % ROBOCTOPI_RAND_MAX;
    std::cout << YELLOW << splashes[randMessage] << BLANK
              << std::endl;
    return;
  }
