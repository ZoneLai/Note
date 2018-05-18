
rajawali

1. AndroidManifest
设置OpenGL、权限等

入口 ExamplesFragment
完成 RecyclerView、SearchView的初始化、监听----->

			BasicFragment.java 继承 AExampleFragment.java
			（1）重写createRenderer方法
				 | 
				 创建并返回BasicRenderer对象
			
			
			（2）定义内部类 BasicRenderer 继承 AExampleRenderer 重写一下两个方法
				 |
				 1.initScene
					纹理、顶点坐标、mvp等初始化
				 2.onRender
					绘制、旋转角度更新
				
		抽象类 AExampleFragment extends Fragment implements IDisplay, OnClickListener
		|
		
				
		抽象类AExampleRenderer 继承 Renderer， Renderer implements ISurfaceRenderer
		|
		{
			final AExampleFragment exampleFragment;
			
		}
		 