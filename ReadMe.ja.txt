ttaplugins-winamp v3.2 (Beta31) 
=====================================================

*このプラグインは
本家(http://www.true-audio.com/)配布のwinamp用プラグインに
taglib(https://github.com/taglib/taglib)をベースとした
メディアライブラリ読み込み対応を付け加え、ID3v2周りを改変したものです。
またアルバムアートなどメディアライブラリのメタデータ読み込み機能を付加しました。
Beta9以降はデコードエンジンをTTA encoder/decoder/decoder multiplatform library, C++ version (http://en.true-audio.com/)に変更しました。
Winamp Ver2.9以降に対応しており，Winamp Ver.5.666にて動作確認しています。


*インストール方法
 WinampのフォルダにあるPluginsフォルダにin_tta.dllとenc_tta.dllをコピーしてください。

*更新履歴
2015-08-27 Beta31 タグデータ編集時正常に保存されない問題を修正(in_tta)
                  再生時に瞬時ビットレートを表示するよう変更(in_tta)
2015-08-27 Beta30 トランスコーディングの動作不能を修正(in_tta)
2015-08-24 Beta29 再生用デコードエンジンをlibtta-cpp-2.3ベースからttaplugin-winamp-3.5 ベースに変更(in_tta.dll)
2015-08-24 Beta28 同梱のlibtta.dllをSSE4対応版に変更(libtta.dll)
2015-08-24 Beta27 メタデータ読み込み時のファイルアクセス回数をさらに削減(in_tta.dll)
2015-08-20 Beta26 メタデータ読み込み時のファイルアクセス回数を削減(in_tta.dll)
2015-08-13 Beta25 エンコード時ファイルの末尾が不正となっている問題を修正(enc_tta.dll)
                  正しいファイル名を取得するためにトランスコーディング用関数名を修正(in_tta.dll)
				  コードの見直し(in_tta.dll)
2015-08-12 Beta24 コードの見直し(in_tta.dll)
                  コードの見直し(enc_tta.dll)
2015-08-11 Beta23 ネイティブUnicode版に変更(in_tta.dll)
                  管理上各プラグインを分離
2015-08-11 Beta22 アルバムアート保存時の問題を修正(in_tta.dll)
2015-08-11 Beta21 エンコード機能の追加(enc_tta.dll)
                  タグ情報の保存時の問題を修正(in_tta.dll)
				  libttaを外部DLL化(in_tta.dll)
                  taglibを外部DLL化(in_tta.dll)
                  taglibを最新stable(2015/08/10 0:50:13 commit Hash:bc106ad81e1015c896b32ae1fec6cb3c3894ac84)ベースに変更
2015-08-04 Beta20 安定性に関する修正
2015-08-04 Beta19 トランスコーディングの動作不能を修正
2015-08-02 Beta18 24bitファイルの再生時にフリーズする問題を修正
                  タイトル表示出力を廃止しWinamp本体に任せるように変更
				  メタデータ読み込み時のファイルアクセス回数を削減
				  プラグインをUNICODEベースモードに変更
				  zlibを本体同梱のdllに変更
                  taglibを最新stable(2015/06/19 16:12:32 commit Hash:e90b5e5f2faded598688c48dd3bdd2fc6cd5cbab)ベースに変更
                  コンパイラをVC2015に変更
2015-05-27 Beta17 ベースライブラリをlibtta++2.3に変更
                  taglibを最新stable(2015/05/25 21:41:37 commit Hash:c5f2e9342dfdf9a94dbcbf70fc3861b2221d1b39)ベースに変更
2014-11-28 Beta16 ベースライブラリをlibtta++2.2に変更
                  taglibを最新stable(2014/10/23 2:31:14 commit Hash:072851869a2980dab4aefd471ad7dd707993d74f)ベースに変更
                  コンパイラをVC2013に変更
2013-08-22 Beta15 taglibを最新stable(commit Hash:fddf3ed51b705d69e12df4a0cba01984ce82c638)ベースに変更
				  taglibをスタティックリンクに再変更
2011-12-10 Beta14 Revert multibyte version
                  libttaからの例外チェックを追加
2011-12-03 Beta13 Unicode Plugin version
                  デコーダー例外処理を追加
2011-11-27 Beta12 不正なファイル名を渡された際にフリーズする問題を修正
                  アルバムアートなしのファイルを読み込むとフリーズすることがある問題を修正
2011-11-21 Beta11 ベースライブラリをlibtta++2.1に変更
                  taglibを同梱から外部dllを使う方法に変更
                  アルバムアート読み込み時のメモリリークを修正
2011-11-17 Beta10 taglibを1.7.0ベースに変更
                  コンパイラをVC2010に変更
2010-11-29 Beta9  アルバムアート読み込みに対応
2009-04-09 Beta8  コンパイラをVC2008に変更
                  ID3 Ver2.4においてYearタグをTDRL -> TDRCに変更
2007/10/23 Beta7  シーク位置ずれの修正
	                Format Conversionに対応
2006/07/03 Beta6  メディアライブラリにyear情報を付加するために小改正
2006/02/23 Beta5  Beta4での修正点が実際には修正されておらず,再修正
2005/12/19 Beta4  再生中に他のプログラムからttaファイルにアクセスできない問題点を修正
2005/12/16 Beta3  ID3v2 Ver2.3の読み込み不具合修正
	                (フレームサイズを正しくデコードしていない問題)
2005/12/14 Beta2

*配布
配布規定はLGPL2.1に従います。

*その他
この改変は私が勝手に行ったものであり、この改変版に関して
本家に問い合わせを行わないでください。

*謝辞
メディアライブラリ読み込み関連では
 おたちゃん さん作成のin_mpg123.dll 改悪版
のソースコードを参照しました。
  Web: http://www3.cypress.ne.jp/otachan/

ID3v2関連では
はせた さん作成のSTEP(SuperTagEditor改 Plugin Version (Nightmare))
のソースコードを参考にしました。
  Web: http://haseta2003.hp.infoseek.co.jp/

シーク関連の修正は
h0shu さん作成のパッチを参考にしました。
  Web: http://hoshustep.hp.infoseek.co.jp/dust.html

この場をお借りしてお礼申し上げます。

Yamagata Fumihiro
mailto:bunbun042000@gmail.com