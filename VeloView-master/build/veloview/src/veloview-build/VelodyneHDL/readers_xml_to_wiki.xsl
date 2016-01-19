<?xml version="1.0" encoding="utf8"?>
<!-- Used to convert XML DOM generated from smxml_to_xml.xsl to Wiki -->
<xsl:stylesheet version="2.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
<xsl:output method="text"/>

<xsl:template match="/xml">
<xsl:for-each select="proxy[group='sources']">
<xsl:sort select="label"/>
<xsl:variable name="proxy_name"><xsl:value-of select="label"/></xsl:variable>
<xsl:if test="contains(lower-case($proxy_name),'reader')">
==<xsl:value-of select="label" />==

<xsl:value-of select="documentation/brief" />

<xsl:value-of select="documentation/long" />

{| class="PropertiesTable" border="1" cellpadding="5"
|-
| '''Property'''
| '''Description'''
| '''Default Value(s)'''
| '''Restrictions'''
<xsl:for-each select="property">
|-
|'''<xsl:value-of select="label" />''' (<xsl:value-of select="name" />)
|
<xsl:value-of select="documentation/long" />
|
<xsl:value-of select="defaults" />
|
<xsl:for-each select="domains/domain">
<xsl:value-of select="text"/>
<xsl:for-each select="list" >
<xsl:for-each select="item">
* <xsl:value-of select="."/>
</xsl:for-each>
</xsl:for-each>
</xsl:for-each>
</xsl:for-each>

|}
</xsl:if>
</xsl:for-each>
</xsl:template>

</xsl:stylesheet>
