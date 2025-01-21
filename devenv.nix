{ pkgs, lib, config, inputs, ... }:

{
  # https://devenv.sh/packages/
  packages = [ pkgs.git ];

  enterShell = ''
    source ~/zephyrproject/.venv/bin/activate
    source ~/zephyrproject/zephyr/zephyr-env.sh
    source ~/esp/esp-idf/export.sh
  '';
}
