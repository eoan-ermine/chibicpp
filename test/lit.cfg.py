import os
import lit.formats

config.name = "chibicpp"

config.suffixes = [
    ".c"
]

config.test_format = lit.formats.ShTest(True)

config.test_source_root = os.path.dirname(__file__)

config.substitutions.append(('%edir', "NO_COLOR=1 " + lit_config.params["edir"]))
config.substitutions.append(('%cc', "NO_COLOR=1 " + lit_config.params["cc"]))
