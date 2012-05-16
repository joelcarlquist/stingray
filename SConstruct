
import os

env = Environment()

env.Append(CPPPATH='source')
env.Replace(CXX='clang++')

def createFileList(path, tree):
	entries = []
	if type(tree) == dict:
		for k,v in tree.iteritems():
			entries += createFileList(os.path.join(path, k), v)
	elif type(tree) == str:
		subpath = tree
		entry = os.path.join(path, subpath)
		entries.append(entry)
	elif type(tree) == list:
		for v in tree:
			entries += createFileList(path, v)
	return entries

project_source_tree = [
	'Main.cpp',
	{
		'Collision': [
			'Shape.cpp',
		],
		'Math': [
			'Vec3.cpp'
		],
		'Renderer': [
		],
		'Scene': [
			'Scene.cpp'
		],
	}
]

sources = createFileList('source', project_source_tree)

env.Program(target='stingray', source=sources)
