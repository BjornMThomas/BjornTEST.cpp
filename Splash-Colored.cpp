  constexpr char RED[] = "\033[31m";
  constexpr char LIGHTRED[] = "\033[1;31m";
  constexpr char DARKRED[] = "\033[38;2;208m";
  constexpr char ORANGE[] = "\033[38;2;170;85;0m";
  constexpr char YELLOW[] = "\033[33m";
  constexpr char GREENYELLOW[] = "\033[38;2;128;128;0m";
  constexpr char GREEN[] = "\033[32m";
  constexpr char LIGHTGREEN[] = "\033[1;32m";
  constexpr char BLUE[] = "\033[34m";
  constexpr char LIGHTBLUE[] = "\033[1;34m";
  constexpr char CYAN[] = "\033[36m"
  constexpr char MAGENTA[] = "\033[35m";
  constexpr char LIGHTMAGENTA[] = "\033[1;35m";
  constexpr char PURPLE[] = "\033[38;2;128;0;128m";
  constexpr char BLANK[] = "\033[0m";
  constexpr char BOLD[] = "\033[1m";
  constexpr char ITALIC[] = "\033[3m";
  constexpr char UNDERLINE[] = "\033[4m";
  constexpr char UNDERLINEX2[] = "\033[21m";
  
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

1;__m                 Bright
38;2;R;G;Bm           Sets Test Color RGB
ex 38;2;170;85;0m     ORANGE
38;2;208m             Dark Red

  void ExecutiveImportGradleSourceDirective() {
    int randMessage = rand() % ROBOCTOPI_RAND_MAX;
    std::cout << YELLOW << splashes[randMessage] << BLANK
              << std::endl;
    return;
  }
