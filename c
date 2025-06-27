<mxfile host="app.diagrams.net" modified="2025-06-27T08:00:00Z" agent="Architecture AI" version="20.1.0">
  <diagram id="arch" name="Market Strategy Project">
    <mxGraphModel dx="1222" dy="601" grid="1" gridSize="10" guides="1" tooltips="1" connect="1" arrows="1" fold="1" page="1" pageScale="1" pageWidth="850" pageHeight="1100">
      <root>
        <!-- required root cells -->
        <mxCell id="0"/>
        <mxCell id="1" parent="0"/>

        <!-- data/raw -->
        <mxCell id="2" value="data/raw" style="rounded=1;whiteSpace=wrap;html=1;fillColor=#fff2cc;strokeColor=#d6b656;fontSize=12;" vertex="1" parent="1">
          <mxGeometry x="40" y="200" width="120" height="50" as="geometry"/>
        </mxCell>

        <!-- Stage 1 -->
        <mxCell id="3" value="Stage 1&#xa;marketdata&#xa;└ loader.py&#xa;└ cleaner.py&#xa;└ resampler.py&#xa;└ visualizer.py" style="rounded=1;whiteSpace=wrap;html=1;fillColor=#dae8fc;strokeColor=#6c8ebf;fontSize=12;" vertex="1" parent="1">
          <mxGeometry x="200" y="200" width="160" height="110" as="geometry"/>
        </mxCell>

        <!-- Stage 2 -->
        <mxCell id="4" value="Stage 2&#xa;wave_engine&#xa;└ base.py&#xa;└ algo_fft.py&#xa;└ algo_hurst.py&#xa;└ mixer.py" style="rounded=1;whiteSpace=wrap;html=1;fillColor=#ffffff;strokeColor=#a4a4a4;fontSize=12;" vertex="1" parent="1">
          <mxGeometry x="400" y="200" width="160" height="110" as="geometry"/>
        </mxCell>

        <!-- Stage 3 -->
        <mxCell id="5" value="Stage 3&#xa;indicator_engine&#xa;└ base.py&#xa;└ ta_wrappers.py&#xa;└ custom.py&#xa;└ pattern_finder.py" style="rounded=1;whiteSpace=wrap;html=1;fillColor=#e1d5e7;strokeColor=#9673a6;fontSize=12;" vertex="1" parent="1">
          <mxGeometry x="600" y="200" width="180" height="110" as="geometry"/>
        </mxCell>

        <!-- Stage 4 -->
        <mxCell id="6" value="Stage 4&#xa;report_engine&#xa;└ schema.py&#xa;└ reporter.py&#xa;└ templates/" style="rounded=1;whiteSpace=wrap;html=1;fillColor=#d5e8d4;strokeColor=#82b366;fontSize=12;" vertex="1" parent="1">
          <mxGeometry x="820" y="200" width="160" height="90" as="geometry"/>
        </mxCell>

        <!-- Stage 5 -->
        <mxCell id="7" value="Stage 5&#xa;strategy_engine&#xa;└ builder.py&#xa;└ backtester.py&#xa;└ analyzers.py" style="rounded=1;whiteSpace=wrap;html=1;fillColor=#ffe6cc;strokeColor=#d79b00;fontSize=12;" vertex="1" parent="1">
          <mxGeometry x="1020" y="200" width="170" height="100" as="geometry"/>
        </mxCell>

        <!-- pipelines box -->
        <mxCell id="8" value="pipelines&#xa;└ run_all.py&#xa;└ tasks/" style="rounded=1;whiteSpace=wrap;html=1;fillColor=#f8cecc;strokeColor=#b85450;fontSize=12;" vertex="1" parent="1">
          <mxGeometry x="620" y="360" width="150" height="70" as="geometry"/>
        </mxCell>

        <!-- edges -->
        <mxCell id="9" style="endArrow=block;html=1;strokeColor=#6c8ebf;" edge="1" parent="1" source="2" target="3">
          <mxGeometry relative="1" as="geometry"/>
        </mxCell>
        <mxCell id="10" style="endArrow=block;html=1;strokeColor=#6c8ebf;" edge="1" parent="1" source="3" target="4">
          <mxGeometry relative="1" as="geometry"/>
        </mxCell>
        <mxCell id="11" style="endArrow=block;html=1;strokeColor=#6c8ebf;" edge="1" parent="1" source="4" target="5">
          <mxGeometry relative="1" as="geometry"/>
        </mxCell>
        <mxCell id="12" style="endArrow=block;html=1;strokeColor=#6c8ebf;" edge="1" parent="1" source="5" target="6">
          <mxGeometry relative="1" as="geometry"/>
        </mxCell>
        <mxCell id="13" style="endArrow=block;html=1;strokeColor=#6c8ebf;" edge="1" parent="1" source="6" target="7">
          <mxGeometry relative="1" as="geometry"/>
        </mxCell>

        <!-- pipelines ↔ stages loops -->
        <mxCell id="14" style="endArrow=block;dashed=1;html=1;strokeColor=#b85450;" edge="1" parent="1" source="8" target="3">
          <mxGeometry relative="1" as="geometry"/>
        </mxCell>
        <mxCell id="15" style="endArrow=block;dashed=1;html=1;strokeColor=#b85450;" edge="1" parent="1" source="8" target="4">
          <mxGeometry relative="1" as="geometry"/>
        </mxCell>
        <mxCell id="16" style="endArrow=block;dashed=1;html=1;strokeColor=#b85450;" edge="1" parent="1" source="8" target="5">
          <mxGeometry relative="1" as="geometry"/>
        </mxCell>
        <mxCell id="17" style="endArrow=block;dashed=1;html=1;strokeColor=#b85450;" edge="1" parent="1" source="8" target="6">
          <mxGeometry relative="1" as="geometry"/>
        </mxCell>
        <mxCell id="18" style="endArrow=block;dashed=1;html=1;strokeColor=#b85450;" edge="1" parent="1" source="8" target="7">
          <mxGeometry relative="1" as="geometry"/>
        </mxCell>

      </root>
    </mxGraphModel>
  </diagram>
</mxfile>
