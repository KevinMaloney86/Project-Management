project('oubliette', 'c',
  version: '0.1',
  license: 'GPL3+',
  default_options: [
    'c_std=c11',
    'warning_level=3'
  ]
)

config = configuration_data()
config.set_quoted('VERSION', meson.project_version())
configure_file(
  output: 'config.h',
  configuration: config
)

src = files(
  'src/main.c',
  'src/dungeon.c',
  'src/monster.c',
  'src/player.c'
)

executable('oubliette', src,
  install: true
)
