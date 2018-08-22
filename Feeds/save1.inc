; This is an example of an Atom feed. Remember that Atom feeds are NOT standardized.
; You do not need to use the Item variable, it is only there to help reduce repetitiveness.

; This is a predefined save for an RSS feed.

[Variables]
1Title=Announcement from pixiv
1URL=http://www.pixiv.net/info.php?mode=atom
1RegExp=(?siU)(>?<title>)(>?(.*)<\/title>)(>?.*\/>\n.{4}<link)(>?(.*)\/>)(>?.*<updated>)(>?(.*)<\/updated>)#PageContent#
1Item=^(?>.*<entry>)(>?.*<title>)(>?(.*)<\/title>)(>?.*<link)(>?(.*)\/>)(>?.*<updated>)(>?(.*)<\/updated>)

; This feed is too long to work due to the news content text being in the file.