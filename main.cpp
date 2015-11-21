#include "sitemapgeneratormenudialog.h"

int main(int argc, char *argv[])
{
  const std::vector<std::string> args { ribi::MenuDialog::ConvertArguments(argc,argv) };
  ribi::SitemapGeneratorMenuDialog d;
  return d.Execute(args);
}

