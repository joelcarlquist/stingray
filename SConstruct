
env = Environment()

env.Append(CPPPATH='source')
env.Replace(CXX='clang++')

sources = [
	'source/Main.cpp',
	'source/Scene/Scene.cpp'
]

env.Program(target='stingray', source=sources)
