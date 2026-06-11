#!/bin/bash
# 推送到 Gitee + GitHub（自动开启代理）
set -e

BRANCH=$(git branch --show-current)

echo "=== 1/3 推送到 Gitee (直连) ==="
git -c http.proxy= -c https.proxy= push origin "$BRANCH"

echo ""
echo "=== 2/3 启动 Clash Verge Rev ==="
cmd.exe /c start "" "shell:appsFolder\io.github.clash-verge-rev.clash-verge-rev" 2>/dev/null || true

# 等待代理就绪
echo "等待代理就绪..."
for i in $(seq 1 15); do
  if curl -s --socks5 127.0.0.1:7890 http://example.com -o /dev/null -m 2 2>/dev/null; then
    echo "代理已连接"
    break
  fi
  sleep 1
done

echo ""
echo "=== 3/3 推送到 GitHub (通过代理) ==="
git push github "$BRANCH"

echo ""
echo "=== 完成，两边都已推送 ==="
