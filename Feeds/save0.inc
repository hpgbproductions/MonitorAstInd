; This is an example of how an RSS feed would look like. Remember that RSS feeds are standardized, but do not need to use the same item parameters.
; You do not need to use the Item variable, it is only there to help reduce repetitiveness.

; This is a predefined save for an RSS feed.

[Variables]
0Title=BBC News (Rainmeter Test)
0URL=http://feeds.bbci.co.uk/news/rss.xml
0RegExp=(?siU)<title>(.*)</title>.*<link>(.*)</link>.*<lastBuildDate>(.*)</lastBuildDate>#PageContent#
0Item=(?(?=.*<item>).*<item>.*<title>(.*)</title>.*<link>(.*)</link>.*<pubDate>(.*)</pubDate>)