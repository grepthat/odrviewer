#pragma once

#include <map>
#include <string>

namespace odr
{

namespace viewer
{

enum class Language
{
    English,
    Chinese,
};

using LanguageMap = std::map<std::string, std::map<Language, const char*>>;
static LanguageMap UiText = {
    {"reset",
     {
         {Language::English, "Reset"},
         {Language::Chinese, "重置"},
     }},
    {"export_obj",
     {
         {Language::English, "Export .obj"},
         {Language::Chinese, "导出.obj文件"},
     }},
    {"detail",
     {
         {Language::English, "Detail"},
         {Language::Chinese, "详情"},
     }},
    {"detail_low",
     {
         {Language::English, "Low"},
         {Language::Chinese, "低"},
     }},
    {"detail_medium",
     {
         {Language::English, "Medium"},
         {Language::Chinese, "中"},
     }},
    {"detail_high",
     {
         {Language::English, "High"},
         {Language::Chinese, "高"},
     }},
    {"parse_options",
     {
         {Language::English, "Parse Options"},
         {Language::Chinese, "解析选项"},
     }},
    {"parse_road_objects",
     {
         {Language::English, "Road Objects"},
         {Language::Chinese, "道路对象"},
     }},
    {"parse_road_signals",
     {
         {Language::English, "Road Signals"},
         {Language::Chinese, "道路信号"},
     }},
    {"parse_lateral_profile",
     {
         {Language::English, "Lateral Profile"},
         {Language::Chinese, "横剖面"},
     }},
    {"parse_lane_height",
     {
         {Language::English, "Lane Height"},
         {Language::Chinese, "车道高度"},
     }},
    {"parse_center_map",
     {
         {Language::English, "Center Map"},
         {Language::Chinese, "地图中心化"},
     }},
    {"parse_road_objects_abs_z",
     {
         {Language::English, "Road Objects Abs Z"},
         {Language::Chinese, "道路对象使用绝对Z值"},
     }},
    {"parse_fix_spiral_edge_cases",
     {
         {Language::English, "Fix Spiral Edge Cases"},
         {Language::Chinese, "螺旋线边缘情况修复"},
     }},
    {"reload_map",
     {
         {Language::English, "Reload Map"},
         {Language::Chinese, "重新加载地图"},
     }},
    {"view",
     {
         {Language::English, "View"},
         {Language::Chinese, "查看"},
     }},
    {"view_road_objects",
     {
         {Language::English, "Road Objects"},
         {Language::Chinese, "道路对象"},
     }},
    {"view_road_signals",
     {
         {Language::English, "Road Signals"},
         {Language::Chinese, "道路信号"},
     }},
    {"view_reference_line",
     {
         {Language::English, "Reference Line"},
         {Language::Chinese, "车道参考中心线"},
     }},
    {"view_reference_line_arrows",
     {
         {Language::English, "Reference Line Arrows"},
         {Language::Chinese, "参考线箭头"},
     }},
    {"view_roadmarks",
     {
         {Language::English, "Roadmarks"},
         {Language::Chinese, "道路标志"},
     }},
    {"view_grid",
     {
         {Language::English, "Grid"},
         {Language::Chinese, "网格"},
     }},
    {"view_wireframe",
     {
         {Language::English, "Wireframe"},
         {Language::Chinese, "线框"},
     }},
    {"view_roads",
     {
         {Language::English, "Roads"},
         {Language::Chinese, "道路"},
     }},
    {"routing",
     {
         {Language::English, "Routing"},
         {Language::Chinese, "路线规划"},
     }},
    {"routing_info",
     {
         {Language::English, "Select Start/End Lanes in RoadNetwork"},
         {Language::Chinese, "选择起点/终点车道"},
     }},
    {"routing_find",
     {
         {Language::English, "Find Route"},
         {Language::Chinese, "查找路线"},
     }},
    {"routing_fail",
     {
         {Language::English, "No Route Found!"},
         {Language::Chinese, "未找到路线"},
     }},
    {"road_network",
     {
         {Language::English, "Road Network"},
         {Language::Chinese, "道路网"},
     }},
    {"road_network_hide_all",
     {
         {Language::English, "Hide all"},
         {Language::Chinese, "全部隐藏"},
     }},
    {"road_network_show_all",
     {
         {Language::English, "Show all"},
         {Language::Chinese, "全部显示"},
     }},
    {"popup_go_to",
     {
         {Language::English, "Go To"},
         {Language::Chinese, "前往"},
     }},
    {"popup_show",
     {
         {Language::English, "Show"},
         {Language::Chinese, "显示"},
     }},
    {"popup_hide",
     {
         {Language::English, "Hide"},
         {Language::Chinese, "隐藏"},
     }},
    {"popup_show_xml",
     {
         {Language::English, "Show XML"},
         {Language::Chinese, "显示XML"},
     }},
    {"popup_routing_start",
     {
         {Language::English, "Routing Start"},
         {Language::Chinese, "开始路由"},
     }},
    {"popup_routing_end",
     {
         {Language::English, "Routing End"},
         {Language::Chinese, "结束路由"},
     }},
    {"route_header",
     {
         {Language::English, "Route"},
         {Language::Chinese, "路线"},
     }},
    {"routing_start",
     {
         {Language::English, "start"},
         {Language::Chinese, "开始"},
     }},
    {"routing_end",
     {
         {Language::English, "end"},
         {Language::Chinese, "结束"},
     }},
    {"tooltip_lateral_profile",
     {
         {Language::English, "Parse road's superelevation and crossfall"},
         {Language::Chinese, "解析道路的超高和横向坡度"},
     }},
    {"tooltip_lane_height",
     {
         {Language::English, "Parse lane's height records, offsetting lanes from reference-line plane"},
         {Language::Chinese, "解析记录的道路高度数据，基于车道参考中心线所在平面进行偏移"},
     }},
    {"tooltip_center_map",
     {
         {Language::English, "Apply offsets to center map at (0/0)"},
         {Language::Chinese, "应用偏移使地图中心在 0/0)"},
     }},
    {"tooltip_road_objects_abs_z",
     {
         {Language::English, "Treat road object's z-offset as absolute z-value, not as track level offset"},
         {Language::Chinese, "将道路对象的z偏移视为绝对z值, 而非轨道级别偏移"},
     }},
    {"tooltip_spiral_edge_case",
     {
         {Language::English, "Treat spiral as line if start- and end-curvature are zero\nTreat as arc if start- and end-curvature are equal"},
         {Language::Chinese, "如果起始和终止曲线曲率为0, 则视为直线,\n如果起始和终止曲线曲率想等, 则视为弧线。"},
     }},
    {"tooltip_signal_width_height_0",
     {
         {Language::English, "Signal width and height are 0"},
         {Language::Chinese, "信号的宽度和高度为0"},
     }}};

} // namespace viewer
} // namespace odr