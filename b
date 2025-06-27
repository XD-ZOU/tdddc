<mxfile host="app.diagrams.net">
  <diagram name="Market Strategy WBS" id="0U8fXkwMFGwUcZQccgfQ">
    <mxGraphModel dx="1192" dy="671" grid="1" gridSize="10" guides="1" tooltips="1" connect="1" arrows="1" fold="1" page="1" pageScale="1" pageWidth="850" pageHeight="1100">
      <root>
        <mxCell id="0"/>
        <mxCell id="1" parent="0"/>

        <!-- Root -->
        <mxCell id="2" value="市場策略生成系統" style="shape=ellipse;whiteSpace=wrap;html=1;" vertex="1" parent="1">
          <mxGeometry x="300" y="20" width="200" height="60" as="geometry"/>
        </mxCell>

        <!-- Phase 1 -->
        <mxCell id="10" value="1. 數據整理與可視化" style="rounded=1;whiteSpace=wrap;html=1;" vertex="1" parent="1">
          <mxGeometry x="60" y="120" width="200" height="50" as="geometry"/>
        </mxCell>
        <mxCell id="11" value="1.1 匯入 Tick 數據\n1.2 轉 K 線\n1.3 蠟燭圖視覺化" style="whiteSpace=wrap;html=1;" vertex="1" parent="1">
          <mxGeometry x="60" y="180" width="200" height="100" as="geometry"/>
        </mxCell>

        <!-- Phase 2 -->
        <mxCell id="20" value="2. 波段分析引擎" style="rounded=1;whiteSpace=wrap;html=1;" vertex="1" parent="1">
          <mxGeometry x="280" y="120" width="200" height="50" as="geometry"/>
        </mxCell>
        <mxCell id="21" value="2.1 定義介面\n2.2 各演算法\n2.3 混合策略" style="whiteSpace=wrap;html=1;" vertex="1" parent="1">
          <mxGeometry x="280" y="180" width="200" height="100" as="geometry"/>
        </mxCell>

        <!-- Phase 3 -->
        <mxCell id="30" value="3. 技術指標分析" style="rounded=1;whiteSpace=wrap;html=1;" vertex="1" parent="1">
          <mxGeometry x="500" y="120" width="200" height="50" as="geometry"/>
        </mxCell>
        <mxCell id="31" value="3.1 計算模組\n3.2 頭尾特徵\n3.3 統計模式" style="whiteSpace=wrap;html=1;" vertex="1" parent="1">
          <mxGeometry x="500" y="180" width="200" height="100" as="geometry"/>
        </mxCell>

        <!-- Phase 4 -->
        <mxCell id="40" value="4. 報表產出" style="rounded=1;whiteSpace=wrap;html=1;" vertex="1" parent="1">
          <mxGeometry x="720" y="120" width="200" height="50" as="geometry"/>
        </mxCell>
        <mxCell id="41" value="4.1 做單統計\n4.2 技術現象\n4.3 相似機率" style="whiteSpace=wrap;html=1;" vertex="1" parent="1">
          <mxGeometry x="720" y="180" width="200" height="100" as="geometry"/>
        </mxCell>

        <!-- Phase 5 -->
        <mxCell id="50" value="5. 策略回測驗證" style="rounded=1;whiteSpace=wrap;html=1;" vertex="1" parent="1">
          <mxGeometry x="940" y="120" width="200" height="50" as="geometry"/>
        </mxCell>
        <mxCell id="51" value="5.1 策略產生\n5.2 回測系統" style="whiteSpace=wrap;html=1;" vertex="1" parent="1">
          <mxGeometry x="940" y="180" width="200" height="100" as="geometry"/>
        </mxCell>

        <!-- Connectors -->
        <mxCell id="100" style="endArrow=block;html=1;strokeWidth=2;" edge="1" source="2" target="10" parent="1"><mxGeometry relative="1" as="geometry"/></mxCell>
        <mxCell id="101" style="endArrow=block;html=1;strokeWidth=2;" edge="1" source="2" target="20" parent="1"><mxGeometry relative="1" as="geometry"/></mxCell>
        <mxCell id="102" style="endArrow=block;html=1;strokeWidth=2;" edge="1" source="2" target="30" parent="1"><mxGeometry relative="1" as="geometry"/></mxCell>
        <mxCell id="103" style="endArrow=block;html=1;strokeWidth=2;" edge="1" source="2" target="40" parent="1"><mxGeometry relative="1" as="geometry"/></mxCell>
        <mxCell id="104" style="endArrow=block;html=1;strokeWidth=2;" edge="1" source="2" target="50" parent="1"><mxGeometry relative="1" as="geometry"/></mxCell>

        <!-- Children connectors -->
        <mxCell id="201" style="endArrow=block;html=1;" edge="1" source="10" target="11" parent="1"><mxGeometry relative="1" as="geometry"/></mxCell>
        <mxCell id="202" style="endArrow=block;html=1;" edge="1" source="20" target="21" parent="1"><mxGeometry relative="1" as="geometry"/></mxCell>
        <mxCell id="203" style="endArrow=block;html=1;" edge="1" source="30" target="31" parent="1"><mxGeometry relative="1" as="geometry"/></mxCell>
        <mxCell id="204" style="endArrow=block;html=1;" edge="1" source="40" target="41" parent="1"><mxGeometry relative="1" as="geometry"/></mxCell>
        <mxCell id="205" style="endArrow=block;html=1;" edge="1" source="50" target="51" parent="1"><mxGeometry relative="1" as="geometry"/></mxCell>
      </root>
    </mxGraphModel>
  </diagram>
</mxfile>
