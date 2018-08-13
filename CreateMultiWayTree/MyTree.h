#pragma once

#include "vector"
#include "string"

namespace MyTree
{
	using namespace std;

	template<typename T>
	class TreeNode
	{
	public:
		explicit TreeNode(const typename T _data)
		{
			data = _data;
		}

		TreeNode() {}

		T data;
		vector<TreeNode<typename T>*> child;
	};

	void CreateChild(TreeNode<int>* _node, string _str)
	{

	}

	void CreateLayer(vector<TreeNode<int>*> _layer, string _str)
	{

	}

	TreeNode<int>* CreateTree(string _str)
	{

	}

}

void PostOrderTraversal(node* _root)
{
	if (!_root) return;

	stack<node*> _nodeStack;
	stack<size_t> _indexStack;

	_nodeStack.push(_root);
	_indexStack.push(0);

	while (!_nodeStack.empty())
	{
		size_t index = _indexStack.top();
		if (index < _nodeStack.top()->child.size())
		{
			_nodeStack.push(_nodeStack.top()->child[index]);
			++_indexStack.top();
			_indexStack.push(0);
		}
		else
		{
			doSomething(_nodeStack);
			//cout << _nodeStack.top()->id << endl;
			_nodeStack.pop();
			_indexStack.pop();
		}
	}
}