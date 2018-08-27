
#### 说明
经常要在程序中写一些简单的HTTP请求，不想使用Win SDK封装的。写个demo，使用其它第三方库太大。百度了下，收集了这个封装。


#### 原文

纯C++实现的HTTP请求封装（POST/GET）
https://www.cnblogs.com/lidabo/p/6404533.html


#### 修改说明

- 修改缓冲区大小为100k，避免导致缓冲区溢出，程序奔溃
- 简单添加获取HTTP服务器返回数据接口
- 添加聚合数据的短信接口使用例子
- 在CenterOS上扩平台测试通过


#### log

```
GET /sms/send.php?mobile=18888888888&tpl_id=tpl_id&key=key HTTP/1.0
Host: v.juhe.cn
User-Agent: Mozilla/5.0 (Windows; U; Windows NT 5.1; zh-CN; rv:1.9.2.3) Gecko/20
100401 Firefox/3.6.3
Connection:close
```
```
HTTP/1.1 200 OK
Date: Mon, 27 Aug 2018 01:21:13 GMT
Content-Type: application/json;charset=utf-8
Connection: close
Set-Cookie: aliyungf_tc=AQAAANCNeifZOA0AtDV0cfT/CoGak2/U; Path=/; HttpOnly
Etag: 02132b8fec79c49b795f7726ed238b59

{"reason":"error key","result":null,"error_code":10001}
```

#### 编码问题
在发送的HTTP数据包含中文时，可能需要转换为utf-8编码；包含空格时，使用URL编码处理下。