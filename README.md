#cocos2d-x
�������̣�
�������������ã�win 10 + vs2012 + coco2d-x-3.9 + python 2.7.3
1.��װ����python2.7.3���μ�������http://www.cocos.com/docs/cocos2d-x/v3/getting-started/setting-up-development-environments-on-windows7-with-vs2013/zh.html

2.����cocosĿ¼�µ�setup.py,���ú�android SDK��NDK����Ӧ����������
	Android NDK ��װ��
		������վ��http://www.androiddevtools.cn/�����°汾����Ӱ�죩
		�����ص�ѹ������ѹ��coco2d-x ��Ŀ¼Cocos�£��Ȳ�Ҫ���û�������������setup.py��ʱ�򣬽�·������build·�������ƽ�ȥ���ɡ�

	Apache-ANT��װ��
		������վ��http://archive.apache.org/dist/ant/binaries/
		ͬ�ϣ����Ƶ�coco2d-x ��Ŀ¼Cocos�£��Ȳ�Ҫ���û�������������setup.py��ʱ�򣬽�·������bin·�������ƽ�ȥ���ɡ�
	android SDK ��װ�� ����д��Android�Ŀ�����ֱ�ӽ�sdk ��·�����ƽ�ȥ��
3.�������֮���½�һ��cocos���̣�
	���նˣ�����D:\cocos2d-x-3.9\tools\cocos2d-console\bin��D:\cocos2d-x-3.9\	�ҵİ�װ·���������У�python cocos.py new HelloCpp -p com.coco2dx.org -l cpp 		-d ~/Desktop���ɴ�����
	����˵����
		�� HelloCppΪ��Ŀ����
		�� -p����Ӱ���
		�� -l����ӿ����������ͣ���cpp, lua, js��������
		 .-d�������Ŀ��ŵ�Ŀ¼
4.��VS���и���Ŀ��
	����Ŀ��proj.win32Ŀ¼����vs��HelloCpp.sln ���ɣ��ұȽ����ˣ�ֱ���ܱ���	���У���

5.������ѧϰC++ ,��������coco2d-x����������С���������֣���һ��С����ʱ�ӳ��򡷣������ڴ���һ�����߼�һЩ����Ʒ����Ϸ
	֪ʶ�㣺1.��������
		2.����������ܡ������ݡ��������㡢����
		3.��ʱ����ʹ��
		4.director ��������ģʽ���¼������Ļص�����
6.��Ŀ���ܣ�
	resourceĿ¼����:��Դ�ļ�
	����Ϊ��Ҫ���ࣻ

ǧ��֮��ʼ�����£����ڼ�ֲ�и����