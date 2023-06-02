# avr_musicbox
avrマイコンとスピーカだけで作れる和音再生可能な電子オルゴール

[GitHub](https://github.com/mcbeeringi/avr_musicbox/)
## 機能
- avrとスピーカーの直結可
- 4ch矩形波
- 楽譜毎にループ機能
- チャンネル毎に設定可能
	- 減衰の有無
	- パルス幅(1:1, 3:1)
	- 音量(1bit)

## 対応AVR
- ATTiny85(t85)
	- 楽譜サイズが小さければt45も可
- ATTiny202(t202)
	- t402も可

## 譜面作成
各ディレクトリのindex.htmlでMusic Macro Languageライクの記法で譜面作成可能

- [t85](t85/)
- [t202](t202/)

生成したバイナリに互換性はないので注意(改善予定)
